//AND (VE):
if(A==1 AND B == 1){
  return 1;}
else if(A==1 AND B == 0){
  return 0;}
else if(A==0 AND B == 1){
  return 0;}
else{
  return 0;}

//OR:
if(A==1 OR B == 1){
  return 1;}
else if(A==1 OR B == 0){
  return 1;}
else if(A==0 OR B == 1){
  return 1;}
else if(A==0 OR B == 0){
  return 0;}

//NOT:
if(A==0){
  return 1;}
else{
  return 0;}

//TAMPON:
if(A==1){
  return 1;}
else{
  return 0;}

//AND NOT:
if(A==1 AND B == 1){
  return 0;}
else if(A==1 AND B == 0){
  return 1;}
else if(A==0 AND B == 1){
  return 1;}
else{
  return 1;}

//OR NOT:
if(A==1 OR B == 1){
  return 0;}
else if(A==1 OR B == 0){
  return 0;}
else if(A==0 OR B == 1){
  return 0;}
else if(A==0 OR B == 0){
  return 1;}

//XOR:
if(A==1 OR B == 1){
  return 0;}
else if(A==1 OR B == 0){
  return 1;}
else if(A==0 OR B == 1){
  return 1;}
else if(A==0 OR B == 0){
  return 0;}

//XNOR:
if(A==1 OR B == 1){
  return 1;}
else if(A==1 OR B == 0){
  return 0;}
else if(A==0 OR B == 1){
  return 0;}
else if(A==0 OR B == 0){
  return 1;}
