# Antonios-Dionysios Pavlozas
# University of West-Attica

# we need the alphabet because we convert letters into numerical values to be able to use
# mathematical operations (note we encrypt the whitespaces as well)

ALPHABET = 'abcdefghijklmnopqrstuvwxyz'
KEY = 3

# caesar decryption algorithm
def caesar_decrypt(cipher_text):
    
    # the decrypted message
    plain_text = ''

    # consider all the letters in the cipher_text
    for c in cipher_text:
        # find the numerical representation (index) associated with tha character in the alphabet
        index = ALPHABET.find(c)
        # caesar decryption is just a simple shift of characters according to the key
        # use modular arithmetic to transform the values within the range [0,num_of_letters_in_alphabet]
        index = (index-KEY)%len(ALPHABET)
         # keep appending the decrypted character to the plain_text
        plain_text = plain_text + ALPHABET[index]
    return plain_text

if __name__ == "__main__":

    encrypted = 'hqfubswlrqlvdphdqvridwwdlqlqjvhfxuhfrpsxwdwlrqryhulqvhfxuhfkdqqhovebxvlqjhqfubswlrqzhglvjxlvhwkhphvvdjhvrwkdwhyhqliwkhwudqvplvvlrqlvglyhuwhgwkhphvvdjhzlooqrwehuhyhdohg'
    decrypted = caesar_decrypt(encrypted)
    print(decrypted)

