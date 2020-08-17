
class Reverse{
	public static void main(String args[])
	{
		String sent="the language Java the language is named after the island Java";
		Reverse obj=new Reverse();
		String rev=obj.reverse_sentence(sent);

		System.out.print(rev);


	}

	String reverse_sentence(String inp){
		String rev[]=inp.split(" ");
		int n=rev.length;
		String reversed="";
		for(int i=n-1;i>=0;i--)
		{
			reversed+=rev[i]+" ";
		}
		return reversed;
	}
}