/**
 * PBSC History ************ PBSC palermor 334188 06/06/2012 Created.
 * 
 */

var menu = document.getElementById("menu");
if (menu != null && menu != undefined) {
	var menuLiArray = menu.getElementsByTagName("li");
	var calculatedWidth = 5; // Default to 5 for the extra pixels.

	// Go through the children and add the width of toplevelmenu items.
	for (i = 0; i < menuLiArray.length; i++) {
		//if (menuLiArray[i].getAttribute("class") == "toplevelmenu") {  // This does not work in quirks mode.
		if (menuLiArray[i].className == "toplevelmenu") {  // This works in quirks mode.
			calculatedWidth += parseInt(menuLiArray[i].style.width);
		}
	}
	
	// If we calculated a size, let's set it otherwise use whatever the offset is.
	// We calculate the size so that if the page is loaded in a window smaller than the
	// menu, it won't wrap and be unusable.  Set both the menu and the parent widths.
	// Setting the parent width will also help with keeping the menu centered when in
	// quirks mode.
	if(calculatedWidth > 5){
		menu.style.width = calculatedWidth + "px";
		menu.parentNode.style.width = calculatedWidth + "px";
		//document.getElementById("menuParentDiv").style.width = calculatedWidth + "px"; // Alternate way of doing this.
	} else{
		menu.style.width = menu.offsetWidth + "px";
		menu.parentNode.style.width = menu.offsetWidth + "px";
		//document.getElementById("menuParentDiv").style.width = menu.offsetWidth + "px"; // Alternate way of doing this.
	}
}