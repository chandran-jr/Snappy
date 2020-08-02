import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class applet extends Applet implements ActionListener {
	
	String name=" "; String gender= " ";
	int age;
	String sem=" ";
	String bc=" ";
	TextField n = new TextField(10);
	CheckboxGroup g=  new CheckboxGroup();
	Checkbox m= new Checkbox("Male",g,true);
	Checkbox f= new Checkbox("Female",g,false);
	Choice c= new Choice();
	TextField s = new TextField(10);
	TextField b = new TextField(10);
	Label l1= new Label("Enter Name");
	Label l2= new Label("Select Gender");
	Label l3= new Label("Age: ");
	Label l4= new Label("Semester: ");
	Label l5= new Label("Branch and Class: ");
	Button b1= new Button("Submit");
	public void init() {
		
		add(l1);
		add(n);
		add(l2);
		add(m);
		add(f);
		add(l3);
		c.add("18");
		c.add("19");
		c.add("20");
		c.add("21");
		c.add("22");
		add(c);
		add(l4);
		add(s);
		add(s);
		add(l5);
		add(b);
		
		add(b1);
		b1.addActionListener(this);
		
	}
	
	public void paint(Graphics g) {
		
		g.drawString("Name:"+name,20,100);
		g.drawString("Gender:"+gender,20,120);
		g.drawString("Age:"+age,20,140);
		g.drawString("Semester:"+sem,20,160);
		g.drawString("Branch and Class:"+bc,20,180);
		}
	
	public void actionPerformed(ActionEvent e) {
		
		name= n.getText();
		gender= g.getSelectedCheckbox().getLabel();
		age= Integer.parseInt(c.getSelectedItem());
		sem= s.getText();
		bc=b.getText();
		repaint();
	}
	
	

}

// <APPLET code="applet.class" width= "500" height= "200"> </APPLET>
