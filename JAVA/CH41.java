package POWER_JAVA;

public class CH41 {

    private int x, y;

    public CH41(int x, int y){
        this.x = x;
        this.y = y;
    }

    public void moveup() {
        this.y++;
    }

    public String toString(){
        return "로켓 데이터는 " + "("+ x+","+y+") 입니다.";
    }
    public static void main (String[] args){

        CH41 r = new CH41(10,20);
        System.out.println(r);
        r.moveup();
        System.out.println(r);


    }
    
}
