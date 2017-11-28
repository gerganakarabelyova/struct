
//One global variable to set, use true if you want the menus to reinit when the user changes text size (recommended):
resizereinit=true;

menu[1] = {
id:'menu1', //use unique quoted id (quoted) REQUIRED!!
fontsize:'100%', // express as percentage with the % sign
linkheight:22 ,  // linked horizontal cells height
hdingwidth:210 ,  // heading - non linked horizontal cells width
// Finished configuration. Use default values for all other settings for this particular menu (menu[1]) ///

menuItems:[ // REQUIRED!!
//[name, link, target, colspan, endrow?] - leave 'link' and 'target' blank to make a header
[". : . : . МЕНЮ . : . : ."], //create header
["Главна страница", "START.html", ""],
["Начална страница", "index.html", ""],
["Спецификация на структура ", "spec.html",""],
["Дефиниране на структурни променливи", "def.html", ""],
["Достъп до членовете на структурата ", "access.html", ""],
["Примерни програми със структури", "ex.html", ""],
["Структури и класове", "class.html", ""],
["Опашки", "queue.html", ""],
["Стекове", "stack.html", ""]

]}; // REQUIRED!! do not edit or remove

////////////////////Stop Editing/////////////////

make_menus();
