// https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3
def abbrev_name(name):
    return '.'.join([x[0] for x in name.split(' ')]).upper()
