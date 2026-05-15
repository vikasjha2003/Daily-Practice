// package dsa.differenceArray;

public class Shifting_letters {
    private static String shiftingLetters(String s, int[][] shifts) {
        StringBuilder sb = new StringBuilder(s);
        int[] diff = new int[s.length()];

        for(int[] q : shifts) {
            int a = 1;
            if(q[2] == 0) a = -1;
            diff[q[0]] += a;
            if(q[1] + 1 < diff.length) diff[q[1] + 1] -= a; 
        }

        int cumsum = 0;

        for(int i = 0; i<diff.length; i++) {
            cumsum += diff[i];
            int a = cumsum + (sb.charAt(i) - 'a');
            // int mod = (a % 26 + 26) % 26;
            int mod = Math.floorMod(a,26);
            sb.setCharAt(i,(char)(mod + 'a'));
        }

        return sb.toString();
    }
    public static void main (String[] args) {
        String s = "abc";
        System.out.println(s);
        int[][] shifts = {{0,1,0},{1,2,1},{0,2,1}};
        String res = shiftingLetters(s, shifts);
        System.out.println(res);
    }
}
