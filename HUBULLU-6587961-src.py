t_cases = int(input());
while t_cases:
    inp = input();
    b1 = inp.split(" ");
    a = int(b1[0]);
    b = int(b1[1]);
    if b == 0:
        print("Airborne wins.");
    else :
        print("Pagfloyd wins.");
    t_cases = t_cases - 1;
