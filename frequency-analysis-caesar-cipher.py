# Antonios-Dionysios Pavlozas
# University of West-Attica
# Question 2

cipher = 'HQFUBSWLRQ LV D PHDQQV RI DWWDLQLQJ VHFXUH FRPSXWDWLRQ RYHU LQVHFXUH FKDQQHO EB XVLQJ HQFUBSWLRQ ZH GLVJXLVH WKH PHVVDJH VR WKDW HYHQ LI WKH WUDQVPLVVLRQ LV GLYHUWHG WKH PHVVDJH ZLOO QRW EH UHYHDOHG'
LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'


def get_letter_count(message):
    # Returns a dictionary with keys of single letters and values of the
    # Count of how many times they appear in the message parameter.
    letter_count = {}
    for letter in message.upper():  # Uniform letters to uppercase
        if letter in [' ', ',', '.']:
            continue
        if letter not in letter_count:
            letter_count[letter] = 1
        else:
            letter_count[letter] += 1

    return letter_count


def get_most_frequent_letter(message):
    # Return the most frequent letter in the given message dictionary
    most_freq_value = 0
    most_freq_index = None
    for letter in message:
        if message[letter] >= most_freq_value:
            most_freq_value = message[letter]
            most_freq_index = letter
    return most_freq_index, most_freq_value

plaintext = ''

letter_count = get_letter_count(cipher)
print(letter_count)

most_frequent_letter = get_most_frequent_letter(letter_count)
print('Most frequent letter =',most_frequent_letter)

e_position = LETTERS.index('E')
m_position = LETTERS.index(most_frequent_letter[0])
key = m_position - e_position

if key < 0:
    key = key + len(LETTERS)
print('Key =', key)

for symbol in cipher:
    try:
        position = LETTERS.index(symbol)
        position = position - key
        if position < 0:
            position = position + len(LETTERS)
        plaintext = plaintext + LETTERS[position]
    except:
        plaintext = plaintext + symbol

print(plaintext)
