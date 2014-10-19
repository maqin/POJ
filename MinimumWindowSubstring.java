public String minWindow(String S, String T) {
        int[] t = new int[256];
		int[] s = new int[256];
		for (int i = 0; i < T.length(); i++)
			t[T.charAt(i)]++;

		int start = -1;
		int end = 0;
		int window = 0;
		String res = "";
		int minV = Integer.MAX_VALUE;
		// System.out.println(t[i]);
		for (int i = 0; i < S.length(); i++) {
			int p = S.charAt(i);
			if (t[p] > 0) {
				if (start == -1)
					start = i;
				//System.out.println(start);
				s[p]++;
				if (s[p] <= t[p])
					window++;
				end = i;
			}
			if (window == T.length()) {
				//System.out.println(window+" "+start+" "+end);
				//int startP = S.charAt(start);
				
				while (s[S.charAt(start)] > t[S.charAt(start)] || s[S.charAt(start)] == 0) {
					if (s[S.charAt(start)] > t[S.charAt(start)])
						s[S.charAt(start)]--;
					start++;
					//System.out.println("window inner  " +i+" "+start+" "+start);
				}
				if ((end - start + 1) < minV) {
					res = S.substring(start, end + 1);
					minV = end-start+1;
				}
			}
		}
		return res;
    }
