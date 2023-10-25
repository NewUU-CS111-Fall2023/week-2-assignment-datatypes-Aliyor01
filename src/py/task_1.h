from random import randint
class NumberGuesser:
    def guess_number(self, target):
        n = randint(1, 100)
        while target != n:
            if target > n:
                print("Too high\n")
                target = int(input("Please try again!\n"))
            else:
                print("Too low\n")
                target = int(input("Please try again!\n"))
        print(f"Excellent you found the number {target}! ")

