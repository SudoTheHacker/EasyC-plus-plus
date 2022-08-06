l = open("scipt.ecpp")
c = l.readlines()
clenght = len(c)

x=0
while x != clenght:
    if c[x] == "\\":
        x=x+1
        if c[x] == "n":
            print("newline")
    x=x+1


def variable():
    int