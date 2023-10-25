class StringMatcher:
    def match_string(self, text):
        if text[-1] in text[0:-1]:
            print(f'Index of "{text[-1]}" in "{" ".join(text[0:-1])}" sentence is {text[0:-1].index(text[-1])}!')
        else:
            print("Does not match")
