mouse,hole = list(map(int,input().split(" ")))
if mouse<hole:
    print("R"*(hole-mouse))
elif mouse>hole:
    print("L"*(mouse-hole))
else:
    print("Saal Noo Mobarak!")