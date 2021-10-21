#Write a program to determine whether a person is eligible to vote or not.
#If he is not eligible, display a how many years are left to be eligible.

person_name=input("Enter name of the person  ")
person_age=int(input("Enter age of the person   "))

if(person_age>=18):
    print("person is eligible to vote")
else:
    print("person is not eligible to vote")
    print(18-person_age,"  years left to become eligible")