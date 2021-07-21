#1. 출력하기 위해서는 날짜와 기온이 나온 칸이 몇번째 칸인지 알아야 한다.

f = open('/content/drive/MyDrive/과외/서원이/모두의 데이터분석/첫째마당/Incheon.csv', 'r', encoding = 'cp949')
data = csv.reader(f)
header = next(data) 

print(header) # 최고기온이 나온 곳은 6번째 칸(인덱스로는 5), 최고기온일자가 나온 곳은 7번째 칸(인덱스로는 6)

################################################################################################################

#2. 데이터가 정상적인지 비정상적인지 확인해야 한다.
f = open('/content/drive/MyDrive/과외/서원이/모두의 데이터분석/첫째마당/Incheon.csv', 'r', encoding = 'cp949')
data = csv.reader(f)
header = next(data)
for row in data:
  row[5]=float(row[5]) #기온데이터가 누락된 곳이 있어서 숫자로 바꿀 수 없음 -> 오류 발생
  print(row)
f.close()

################################################################################################################

#3. 데이터가 비정상적일 때 수정하는 방법을 알아야 한다.

f = open('/content/drive/MyDrive/과외/서원이/모두의 데이터분석/첫째마당/Incheon.csv', 'r', encoding = 'cp949')
data = csv.reader(f)
header = next(data)

for row in data:
  if row[5]=='':
    row[5] = -999 #누락된 곳에는 -999를 넣어 누락되었던 곳임을 표시
  row[5] = float(row[5])
  print(row) #이런식으로 누락된 곳을 채워넣을 수 있음을 학습

f.close()

################################################################################################################

#4. 비정상적인 데이터를 수정한 뒤 값들을 비교하여 가장 높은 기온과 날짜를 구한 뒤 출력한다.

import csv
max_temp = -999
max_date = ''

f = open('/content/drive/MyDrive/과외/서원이/모두의 데이터분석/첫째마당/Incheon.csv', 'r', encoding = 'cp949')
data = csv.reader(f)
header = next(data)

for row in data:
  if row[5]=='': #파일을 새로 열었으니 다시 공백에는 -999 작업
    row[5] = -999
  row[5] = float(row[5]) # float으로 바꿔줌으로써 비교되게 만듦
  
  if max_temp < row[5]: #만약 현재 비교하고 있는 온도가 max_temp 보다 높으면
    max_date = row[6] #해당 날짜로 업데이트하고
    max_temp = row[5] #해당 온도로 업데이트한다

print(max_date, max_temp)  #이후 정답을 출력한다

print("기상 관측 아래 인천의 최고 기온이 가장 높았던 날은", max_date + '로, ', max_temp, '도 였습니다.')
