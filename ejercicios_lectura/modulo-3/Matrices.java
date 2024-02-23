public class Matrices {
  public static void main(String[] args) {
    String equipos[][] = new String[2][5];

    equipos[0][0] = "José";
    equipos[0][1] = "Clara";
    equipos[0][2] = "Pepa";
    equipos[0][3] = "Juana";
    equipos[0][4] = "Marta";

    equipos[1][0] = "Leo";
    equipos[1][1] = "Lucas";
    equipos[1][2] = "Rocío";
    equipos[1][3] = "Mariela";
    equipos[1][4] = "Leonel";

    for (int i = 1; i <= 2; i++) {
      System.out.println("Equipo " + i);
      for (int j = 1; j <= 5; j++) {
        System.out.println("Integrante " + j + ": " + equipos[i-1][j-1]);
      }
    }
  }
}
