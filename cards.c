int main() {
  char card_name[3];
  puts("enter the card name::");
  scanf("%2s", card_name);
  int val=0;
  if(card_name[0]=='K') {
    val= 10;
  } else if(card_name[0]=='Q') 
    val=10;
} else if (card_name[0]=='J') {
  val = 10;
} else if (card_name[0]=='A') {
  val = 11;
} else { 
  val = atoi(card_name);
}
/* check value is 3 to 6 */
if ((val >2) && (val <7)) {
  puts("count has gone up");
}
/* otherwise chec if card was10,J, Q or K*/
else if (val==10) {
  puts("count has gone down");
}
return 0;
}
