import random
import string

pw_length = 10
character_values = string.ascii_letters + string.digits + string.punctuation

password = ""
for i in range(pw_length):
    password += random.choice(character_values)
    
print("Your password is: ", password)
