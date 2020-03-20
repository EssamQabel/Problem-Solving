def delete_vowels(string):
    return_string = ""
    vowels = ['a','o','y','e','u','i','A','O','Y','E','U','I']
    for c in string:
        if c not in vowels:
            return_string += c
    return return_string

def insert_dot(string):
    return_string = ""
    for c in string:
        return_string += ("." + c)
    return return_string

string = input()
string = delete_vowels(string)
string = insert_dot(string)
print(string.lower())