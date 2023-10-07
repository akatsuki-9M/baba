import random
import string
 domains = ['gmail.com', 'yahoo.com', 'hotmail.com', 'outlook.com', 'aol.com']
 def generate_random_email():
    letters = string.ascii_lowercase
    username = ''.join(random.choice(letters) for i in range(8))
    domain = random.choice(domains)
    return username + '@' + domain
 print(generate_random_email())