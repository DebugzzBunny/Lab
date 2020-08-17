
public class Tree
{
	Tree left,right;
	int data;

	Tree(Tree left,Tree right,int data)
	{
		this.data=data;
		this.left=left;
		this.right=right;
	}
	void traverse()
	{
		if(this==null)
		{
			return;
		}
		System.out.print(this.data+" ");
		if(this.left!=null)left.traverse();
		if(this.right!=null)right.traverse();
		
	}

}


class Bintree
{
	public static void main(String args[])
	{
		Tree f =new Tree(null,null,6);
		Tree e =new Tree(null,null,5);
		Tree d =new Tree(null,null,4);
		Tree b =new Tree(d,null,2);
		Tree c =new Tree(e,f,3);
		Tree root =new Tree(b,c,1);
		root.traverse();

	}
}