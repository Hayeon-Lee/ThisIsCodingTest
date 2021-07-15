from google.colab import drive
drive.mount('/content/drive')

import csv

f = open('/content/drive/MyDrive/과외/서원이/모두의 데이터분석/unit01/Incheon.csv', 'r', encoding = 'cp949')
data = csv.reader(f, delimiter = ',')
print(data)
#f.close()

for row in data:
  print(row)
  
f = open('/content/drive/MyDrive/과외/서원이/모두의 데이터분석/unit01/Incheon.csv', 'r', encoding = 'cp949')
data = csv.reader(f)
header = next(data)
print(header)

for row in data:
  print(row)
