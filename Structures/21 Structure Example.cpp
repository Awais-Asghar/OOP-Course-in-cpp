#include<iostream>
#include<string>
using namespace std;

struct Ingredient {
    string name;
    double quantity;
    string unit;
};

struct Recipe {
    string recipeName;
    Ingredient ingredients[10];  // Maximum 10 ingredients per recipe
    string cookingInstructions[10];  // Maximum 10 cooking instructions per recipe
    int numIngredients = 0;  // Current number of ingredients
    int numInstructions = 0;  // Current number of instructions
};

// Function to create a new recipe
Recipe createRecipe(string name) 
{
    Recipe r1;
    r1.recipeName = name;
    return r1;
}

void addIngredient(Recipe &r1, string &name, double &quantity, string &unit) 
{
    if (r1.numIngredients < 10) 
	{
        cout << "Enter ingredient name: ";
        cin.ignore(); // Clear any remaining newline characters from previous input.
        getline(cin, name);

        cout << "Enter quantity: ";
        cin >> quantity;

        cin.ignore(); // Clear newline character after reading quantity.

        cout << "Enter unit: ";
        cin.ignore(); // Clear any remaining newline characters from previous input.
        getline(cin, unit); // Read the entire line of input for the unit.

        r1.ingredients[r1.numIngredients].name = name;
        r1.ingredients[r1.numIngredients].quantity = quantity;
        r1.ingredients[r1.numIngredients].unit = unit;
        r1.numIngredients++;
        cout << "Ingredient added to the recipe." << endl;
    } else {
        cout << "Maximum number of ingredients reached for this recipe." << endl;
    }
}

void addCookingInstruction(Recipe &r1, string &instruction) 
{
    if (r1.numInstructions < 10) 
	{
        cout << "Enter cooking instruction: ";
        cin.ignore(); // Clear any remaining newline characters from previous input.
        getline(cin, instruction); // Read the entire line of input for the instruction.

        r1.cookingInstructions[r1.numInstructions] = instruction;
        r1.numInstructions++;
        cout << "Cooking instruction added to the recipe." << endl;
    } else {
        cout << "Maximum number of instructions reached for this recipe." << endl;
    }
}

void displayRecipeDetails(Recipe &r1)
{
    cout << "Recipe Name: " << r1.recipeName << endl;
    cout << "Ingredients:" << endl;
    for (int i = 0; i < r1.numIngredients; i++) {
        cout << "- " << r1.ingredients[i].name << ": " << r1.ingredients[i].quantity << " " << r1.ingredients[i].unit << endl;
    }
    cout << "Instructions:" << endl;
    for (int i = 0; i < r1.numInstructions; i++) {
        cout << r1.cookingInstructions[i] << endl;
    }
}

int main() 
{
    Recipe recipe;
    bool createdFirstRecipe = false;
    while (true) {
        cout << "\nRecipe Management System" << endl;
        cout << "1. Create a new recipe" << endl;
        cout << "2. Add ingredients to the recipe" << endl;
        cout << "3. Add cooking instructions to the recipe" << endl;
        cout << "4. Display recipe details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                if (!createdFirstRecipe) {
                    cout << "Enter the name of the recipe: ";
                    cin.ignore(); 
                    getline(cin, recipe.recipeName); 
                    createdFirstRecipe = true;
                    cout << "Recipe created successfully!" << endl;
                } else {
                    cout << "You can only create one recipe initially." << endl;
                }
                break;
            }
            case 2: {
                if (createdFirstRecipe) {
                    string ingredientName;
                    double quantity;
                    string unit;
                    addIngredient(recipe, ingredientName, quantity, unit);
                } else {
                    cout << "Please create a recipe first." << endl;
                }
                break;
            }
            case 3: {
                if (createdFirstRecipe) {
                    string instruction;
                    addCookingInstruction(recipe, instruction);
                } else {
                    cout << "Please create a recipe first." << endl;
                }
                break;
            }
            case 4: {
                if (createdFirstRecipe) 
				{
                    displayRecipeDetails(recipe);
                } else {
                    cout << "Please create a recipe first." << endl;
                }
                break;
            }
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    return 0;
}
