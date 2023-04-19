const express = require('express');

const router = express.Router();

app.get("/", function (req, res) {
  res.render("index");
});

app.get("/about", function (req, res) {
  res.render("about");
});

module.exports = router;