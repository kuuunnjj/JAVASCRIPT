document.addEventListener('DOMContentLoaded', function() {
    const recipeForm = document.getElementById('recipeForm');
    const recipeList = document.getElementById('recipeList');
    const searchTitleInput = document.getElementById('searchTitle');
    const searchIngredientsInput = document.getElementById('searchIngredients');
    const filterCuisineSelect = document.getElementById('filterCuisine');
    let recipes = JSON.parse(localStorage.getItem('recipes')) || [];

    displayRecipes();

    recipeForm.addEventListener('submit', function(event) {
        event.preventDefault();
        const title = document.getElementById('title').value;
        const ingredients = document.getElementById('ingredients').value;
        const instructions = document.getElementById('instructions').value;
        const cuisine = document.getElementById('cuisine').value;

        if (title.trim() === '' || ingredients.trim() === '') {
            alert('Please provide title and ingredients for the recipe.');
            return;
        }

        const newRecipe = {
            id: Date.now(),
            title,
            ingredients,
            instructions,
            cuisine
        };

        recipes.push(newRecipe);
        localStorage.setItem('recipes', JSON.stringify(recipes));
        displayRecipes();
        recipeForm.reset();
    });

    searchTitleInput.addEventListener('input', filterRecipes);
    searchIngredientsInput.addEventListener('input', filterRecipes);
    filterCuisineSelect.addEventListener('change', filterRecipes);

    function displayRecipes() {
        recipeList.innerHTML = '';
        recipes.forEach(function(recipe) {
            const recipeDiv = document.createElement('div');
            recipeDiv.classList.add('recipe-container');
            recipeDiv.innerHTML = `
                <h2>${recipe.title}</h2>
                <p><strong>Ingredients:</strong> ${recipe.ingredients}</p>
                <p><strong>Instructions:</strong> ${recipe.instructions}</p>
                <p><strong>Cuisine:</strong> ${recipe.cuisine}</p>
                <button onclick="editRecipe(${recipe.id})">Edit</button>
                <button onclick="deleteRecipe(${recipe.id})">Delete</button>
            `;
            recipeList.appendChild(recipeDiv);
        });
    }

    function filterRecipes() {
        const searchTermTitle = searchTitleInput.value.trim().toLowerCase();
        const searchTermIngredients = searchIngredientsInput.value.trim().toLowerCase();
        const cuisineFilter = filterCuisineSelect.value;

        const filteredRecipes = recipes.filter(function(recipe) {
            const titleMatch = recipe.title.toLowerCase().includes(searchTermTitle);
            const ingredientsMatch = recipe.ingredients.toLowerCase().includes(searchTermIngredients);
            const cuisineMatch = cuisineFilter === '' || recipe.cuisine === cuisineFilter;
            return titleMatch && ingredientsMatch && cuisineMatch;
        });

        displayFilteredRecipes(filteredRecipes);
    }

    function displayFilteredRecipes(filteredRecipes) {
        recipeList.innerHTML = '';
        filteredRecipes.forEach(function(recipe) {
            const recipeDiv = document.createElement('div');
            recipeDiv.classList.add('recipe-container');
            recipeDiv.innerHTML = `
                <h2>${recipe.title}</h2>
                <p><strong>Ingredients:</strong> ${recipe.ingredients}</p>
                <p><strong>Instructions:</strong> ${recipe.instructions}</p>
                <p><strong>Cuisine:</strong> ${recipe.cuisine}</p>
                <button onclick="editRecipe(${recipe.id})">Edit</button>
                <button onclick="deleteRecipe(${recipe.id})">Delete</button>
            `;
            recipeList.appendChild(recipeDiv);
        });
    }

    window.editRecipe = function(id) {
        const recipeToEdit = recipes.find(recipe => recipe.id === id);
        if (!recipeToEdit) return;
        const title = prompt('Enter new title:', recipeToEdit.title);
        const ingredients = prompt('Enter new ingredients:', recipeToEdit.ingredients);
        const instructions = prompt('Enter new instructions:', recipeToEdit.instructions);
        const cuisine = prompt('Enter new cuisine:', recipeToEdit.cuisine);

        if (title !== null && ingredients !== null && instructions !== null && cuisine !== null) {
            recipeToEdit.title = title.trim();
            recipeToEdit.ingredients = ingredients.trim();
            recipeToEdit.instructions = instructions.trim();
            recipeToEdit.cuisine = cuisine.trim();
            localStorage.setItem('recipes', JSON.stringify(recipes));
            displayRecipes();
        }
    }

    window.deleteRecipe = function(id) {
        const recipeIndex = recipes.findIndex(recipe => recipe.id === id);
        if (recipeIndex === -1) return;
        recipes.splice(recipeIndex, 1);
        localStorage.setItem('recipes', JSON.stringify(recipes));
        displayRecipes();
    }
});
