while 1:
    inp = input();
    b1 = inp.split(" ");
    a = int(b1[0]);
    b = int(b1[1]);
    c = int(b1[2]);
    b2 = [];
    b2.append(a);
    b2.append(b);
    b2.append(c);
    b2 .sort();
    if b2[0] == 0 & b2[1] == 0 & b2[2] == 0:
        break;
    lhs = (b2[0]*b2[0]) + (b2[1]*b2[1]);
    c = b2[2]*b2[2];
    if lhs == c:
        print("right");
    else:
        print("wrong");
