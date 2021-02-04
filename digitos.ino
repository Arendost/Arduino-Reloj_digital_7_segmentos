void Dig0(int D)
{

  switch (D)
  {
  case 0:
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);  
  digitalWrite(12,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);  
  break;

  case 1:
  digitalWrite(9,HIGH); 
  digitalWrite(11,HIGH);
  
  break;

  case 2:
  digitalWrite(10,HIGH);  
  digitalWrite(9,HIGH);  
  digitalWrite(8,HIGH);  
  digitalWrite(6,HIGH);  
  digitalWrite(12,HIGH);
 
  break;

   case 3:
  digitalWrite(10,HIGH); 
  digitalWrite(9,HIGH);
   digitalWrite(8,HIGH); 
  digitalWrite(11,HIGH); 
  digitalWrite(12,HIGH);
 
  break;

    case 4:
  digitalWrite(7,HIGH);  
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(11,HIGH);
 
  break;

  case 5:
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);

  break;

  case 6:
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(12,HIGH);
  break;

  case 7:
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  break;

case 8:
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
digitalWrite(11,HIGH);
digitalWrite(6,HIGH);
digitalWrite(12,HIGH);
digitalWrite(9,HIGH);
break;

  case 9:
digitalWrite(10,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(9,HIGH);
break;
  
  }

  }
