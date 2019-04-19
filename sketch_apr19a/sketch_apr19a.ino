void setup() {
  Serial.begin(9600);
  
  const int ROW = 3;
  const int COL = 4;

  int arr[ROW][COL]{0};           //2я строка 2й столбец двумерного массива (нумерация столбов и строк начинается с 0)

  for (int i = 0; i < ROW; i++)
  {
    for (int j = 0; j < COL; j++)
    {
      arr[i][j] = rand() % 100 + 1;
      Serial.print(arr[i][j]);
      Serial.print('\t');
    }
    Serial.print('\n');
  }     
  
  int *ptr = *arr;              //Димон выебнулся

  Serial.println('\n');

  for (int i = 0; i < ROW*COL; ++i)     
  {
    Serial.print(*ptr);
    Serial.print(' ');         
    ++ptr;                  //сдвиг указателя на размер типа данных
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
