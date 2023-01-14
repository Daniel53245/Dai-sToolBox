import datetime

def dateCompile(date):
    words = date.split("/")
    day = int(words[0])
    month =int(words[1])
    year = int(words[2])
    pydate = datetime.datetime(year,month,day)
    return pydate

if __name__ == "__main__":
    test_date = "10/1/2022"
    print(dateCompile(test_date))

