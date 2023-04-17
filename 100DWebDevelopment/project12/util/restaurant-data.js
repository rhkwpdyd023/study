function getStoredRestaurants() {
  const filePath = path.join(__dirname, "data", "restaurants.json");

  const fileData = fs.readFileSync(filePath);
  const storedRestaurants = JSON.parse(fileData);

  return storedRestaurants;
}

function storedRestaurants(storableRestaurants){
  fs.writeFileSync(filePath, JSON.stringify(storedRestaurants));
}