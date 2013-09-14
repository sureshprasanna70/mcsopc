import java.util.*; 
class tandf
{
public static char[][] decrypt(String s, int columns, int rows) {
  char[][] solved = new char[rows][columns];
  int pos1 = 0;
  for(int i=0;i<rows;++i) {
    for(int j=0;j<columns;++j) {
      solved[i][j] = s.charAt(pos1);
      ++pos1;
    }
  }
  
  for(int i=1;i<rows;i+=2) {
    for(int j=0;j<columns/2;++j) {
      
      int pos2 = columns-j-1;
      char temp = solved[i][j];
      solved[i][j] = solved[i][pos2];
      solved[i][pos2] = temp;
    }
  }
  return solved;
}

public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    while(true) {
      int columns = in.nextInt();
      if (columns == 0) {
        break;
      }
      String encrypted = in.next();
      int rows = encrypted.length()/columns;
      char[][] solved = decrypt(encrypted, columns, rows);
      
      for(int i=0;i<columns;++i) {
        for(int j=0;j<rows;++j) {
          System.out.print(solved[j][i]);
        }
      }
      System.out.println();
    }
  }


} 
