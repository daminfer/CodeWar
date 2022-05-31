# Problème Rank: 5 Kyu

# Note perso: Attention, revoir expression régulière, c'est ultra utile !!!
"""
Write a function that when given a URL as a string, parses out just the domain name and returns it as a string. For example:

* url = "http://github.com/carbonfive/raygun" -> domain name = "github"
* url = "http://www.zombie-bites.com"         -> domain name = "zombie-bites"
* url = "https://www.cnet.com"                -> domain name = cnet"
"""

import re

def domain_name(url):

    f = re.sub("http[s]?\:\/\/", "", url)
    f = re.sub("/[\w]*", "", f)
    f = re.sub("www.", "", f)
    f = re.sub("\.\w*", "", f)
    return f

import re
def domain_name_2(url):
    return re.search('(https?://)?(www\d?\.)?(?P<name>[\w-]+)\.', url).group('name')

domain_name("http://github.com/carbonfive/raygun")
domain_name("http://www.zombie-bites.com")