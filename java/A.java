class A{
	String name;
	int age;
	A(){
	
	
	}
	A(String tname,int tage){

	
		name = tname;
		age  = tage;
		System.out.println("age:" + age + "name :" + name);
	
	}
	void funcA(){
	
		System.out.println("no parameter");
	}	

	void funcA(int i){
	
		System.out.println("hava parameter");
	}
}
