import Person

bob = Person.Person('Bob Smith')
sue = Person.Person('Sue Jones', job='dev', pay=100000)

print(bob.name, bob.pay)
print(sue.name,sue.pay)

sue.giveRaise(0.1)
print(sue.name,sue.pay)

print(sue)