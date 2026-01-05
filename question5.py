basic_sal=int(input("enter the basic salary"))
HRA=(basic_sal*(20/100))
DA=(basic_sal*(10/100))
Tax=(basic_sal*(5/100))
net_sal=HRA+DA+Tax+basic_sal
print(HRA)
print(DA)
print(Tax)
print("The net salary =",net_sal)

