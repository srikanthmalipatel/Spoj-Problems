    #include <stdio.h>
    #include <math.h>

    int main()
    {
       while(1)
       {
          long long int number;
          scanf("%lld", &number);
          
          if(number == 0)
             break;

          //int level = log(number)/ log(2);   //calculating the level in tree
          long long int path[50];
          int count = 0;
		  
		  if(number == 1)
		  {
			printf("%d/%d\n", 1, 1);
			continue;
		  }
       
          while(1)            //storing the path toward root
          {
             if(count)
             {
                path[count] = path[count -1] /2;
                if(path[count] == 1)
                   break;
             }
             else
                path[count] = number;

             count++;
          }      

          int i, n = 1, d = 1;
          for(i = count-1; i >= 0; i--)      //traversing the path and caluclating accordingly
          {
             if((path[i]/2)*2 == path[i]) //even
             {
                d = n+d;
             }
             else   //odd
             {
                n = n+d;
             }
          }
          printf("%d/%d\n", n, d);
       }
       return 0;
    }