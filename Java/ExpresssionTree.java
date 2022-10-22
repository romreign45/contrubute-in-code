
import java.lang.*;

class GFG{
	
Node root;


public static class Node
{
	String data;
	Node left, right;

	Node(String d)
	{
		data = d;
		left = null;
		right = null;
	}
}

private static int toInt(String s)
{
	int num = 0;

	if (s.charAt(0) != '-')
		for(int i = 0; i < s.length(); i++)
			num = num * 10 + ((int)s.charAt(i) - 48);
	
	else
	{
		for(int i = 1; i < s.length(); i++)
		num = num * 10 + ((int)(s.charAt(i)) - 48);
		num = num * -1;
	}
	return num;
}

// This function receives a node of the syntax
// tree and recursively evaluate it
public static int evalTree(Node root)
{
	
	// Empty tree
	if (root == null)
		return 0;

	// Leaf node i.e, an integer
	if (root.left == null && root.right == null)
		return toInt(root.data);

	// Evaluate left subtree
	int leftEval = evalTree(root.left);

	// Evaluate right subtree
	int rightEval = evalTree(root.right);

	// Check which operator to apply
	if (root.data.equals("+"))
		return leftEval + rightEval;

	if (root.data.equals("-"))
		return leftEval - rightEval;

	if (root.data.equals("*"))
		return leftEval * rightEval;

	return leftEval / rightEval;
}


public static void main(String[] args)
{
	
	// Creating a sample tree
	Node root = new Node("+");
	root.left = new Node("*");
	root.left.left = new Node("5");
	root.left.right = new Node("-4");
	root.right = new Node("-");
	root.right.left = new Node("100");
	root.right.right = new Node("20");
	System.out.println(evalTree(root));

	root = null;

	// Creating a sample tree
	root = new Node("+");
	root.left = new Node("*");
	root.left.left = new Node("5");
	root.left.right = new Node("4");
	root.right = new Node("-");
	root.right.left = new Node("100");
	root.right.right = new Node("/");
	root.right.right.left = new Node("20");
	root.right.right.right = new Node("2");
	System.out.println(evalTree(root));
}
}

