var quit = 999;
		var price;
		var quantInput;
		var total;
		var grandTotal;
		var choice;

		while (choice !== quit) {
			choice = parseInt(prompt("Enter a product number 1-5 or 999 to stop: "));
			switch (choice) {
				case 1:
					price = 2.98;
					quantInput = prompt("Enter quantity sold today: ");
					total = parseInt(quantInput) * price;
					grandTotal += total;
					document.write("Total sales for Product 1: $" + total);			
					break;
				case 2:
					price = 4.50;
					quantInput = prompt("Enter quantity sold today: ");
					total = parseInt(quantInput) * price;
					grandTotal += total;
					document.write("Total sales for Product 2: $" + total);	
					break;
				case 3:
					price = 9.98;
					quantInput = prompt("Enter quantity sold today: ");
					total = parseInt(quantInput) * price;
					grandTotal += total;
					document.write("Total sales for Product 3: $" + total);	
					break;
				case 4:
					price = 4.49;
					quantInput = prompt("Enter quantity sold today: ");
					total = parseInt(quantInput) * price;
					grandTotal += total;
					document.write("Total sales for Product 4: $" + total);	
					break;
				case 5:
					price = 6.87;
					quantInput = prompt("Enter quantity sold today: ");
					total = parseInt(quantInput) * price;
					grandTotal += total;
					document.write("Total sales for Product 5: $" + total);	
					break;
				default: 
					document.write("Input was not a number, try again.");
				break;
			}
		}
		document.write("Total sales for Product " + choice + ": $" + total + "<br/>");
		document.write("Total for all products sold: $" + grandTotal);