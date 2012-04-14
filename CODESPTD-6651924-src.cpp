#include <cstdio>
#include <cstring>
#define MOD 1000000007

// Solution uses memoization of a brute-force solving of all permutations.

// Number of rows and columns.
int n, m;
// Character representation of the grid.
char g[50][5];
// Valid configurations for row i (up to 2**5 of them).
int good[50][1 << 5];
// Number of valid configurations in row i.
int szg[50];
// Array of N bitmasks containing 111 for each M.
int block[50];
// Number of solutions for a given row and bitmask.
int memo[50][1 << 15];
// The next bitmask, given a particular bitmask.
int memo2[1 << 15];

// Get the next bitmask with queen attack vectors accounted for.
int spread(int mask)
{
  // Solutions been found before, use it.
  if (memo2[mask] != -1) return memo2[mask];

  int nmask = 0;
  // For each square
  for (int i = 0; i < m; i++) {
    // If a left-angling attack vector exists and we're not at the left edge,
    // extend it into the left-diagonal square.
    if (mask & 1 << 3 * i && i > 0) {
      nmask |= 1 << 3 * i - 3;
    }
    // If a vertical attack vector exists, extend it into the square below.
    if (mask & 1 << 3 * i + 1) {
      nmask |= 1 << 3 * i + 1;
    }
    // If a right-angling attack vector exists and we're not at the right edge,
    // extend it into the right-diagonal square.
    if (mask & 1 << 3 * i + 2 && i + 1 < m) {
      nmask |= 1 << 3 * i + 5;
    }
  }
  return memo2[mask] = nmask;
}

// Solve for row x, with a mask for squares that are blocked by earlier queens.
int solve (int x, int mask)
{
  // We've reached the end of a solution, so return.
  if (x == n) return 1;

  // Adjust the mask for squares that are already blocked.
  mask &= ~block[x];
  // If we've already solved this, return the result.
  if (memo[x][mask] != -1) return memo[x][mask];

  // If not, count solutions.
  int ret = 0;
  // For each configuration of this row
  for (int i = 0; i < szg[x]; i++) {
    // If we haven't tried all configurations yet
    if (!(good[x][i] & mask)) {
      // Try the next row, with rows blocked by queens masked out.
      ret += solve(x + 1, spread(good[x][i] | mask));
      // Don't let the number get too big.
      if(ret >= MOD) ret -= MOD;
    }
  }
  return memo[x][mask] = ret;
}

int solve()
{
  // For each row in N
  for (int i = 0; i < n; i++) {
    block[i] = 0;
    int cmask = 0;
    for (int j = 0; j < m; j++) {
      if (g[i][j] == '#') {
        // Create bitmask for #, like 01001
        cmask |= 1 << j;
        // Create bitmask with 111111111111111 (for M==5)
        block[i] |= 7 << 3 * j;
      }
    }

    szg[i] = 0;
    // For each 2**M permutations of queens on this row
    for (int j = 0; j < 1 << m; j++) {
      // If the queen is not on a #
      if ((j & cmask) == 0) {
        bool valid = true;
        // For each column in M
        for (int k = 0; k < m; k++) {
          // If a queen is in that column, and another queen is on the same row
          // before another #, then that position isn't valid.
          if (j & 1 << k) {
            for (int kk = k + 1; kk < m && g[i][kk] != '#'; kk++) {
              if (j & 1 << kk) {
                valid = false;
              }
            }
          }
        }
        if (!valid) continue;

        // If this is a valid configuration of queens for this row, create a
        // bitmask with 111 where a queen is. Add it to the good matrix at row i
        // and increment the size of that row (szg).
        int sp = 0;
        for (int k = 0; k < m; k++) {
          if (j & 1 << k) {
            sp |= 7 << 3 * k;
          }
        }
        good[i][szg[i]] = sp;
        szg[i]++;
      }
    }
  }

  // Initialize memoization tables to -1 for each entry.
  memset(memo,255,sizeof memo);
  memset(memo2,255,sizeof memo2);
  // Solve recursively.
  return solve(0,0);
}

int main()
{
  int runs;
  scanf("%d",&runs);
  while (runs--) {
    scanf("%d%d",&n,&m);
    // Initialize board.
    for (int i = 0;i < n;i++) scanf("%s",g[i]);
    int ret = solve();
    ret = (ret - 1 + MOD) % MOD;
    printf("%d\n",ret);
  }
  return 0;
}