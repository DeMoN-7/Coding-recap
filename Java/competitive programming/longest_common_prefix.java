public class longest_common_prefix {
    static String comm(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        if (strs.length == 1) {
            return strs[0];
        }
    
        String fin = strs[0]; 
        for (int i = 1; i < strs.length; i++) {
            String current = strs[i];
    
           int j = 0;
            while (j < fin.length() && j < current.length() && fin.charAt(j) == current.charAt(j)) {
                j++;
            }
    
             fin = fin.substring(0, j);
    
            if (fin.isEmpty()) {
                return "";
            }
        }
    
        return fin;
    }
    

    public static void main(String[] args) {
        // String[] str = { "flow", "aflower", "flight" };
        String[] str = { "",""};
        System.out.println(comm(str));
    }
}
