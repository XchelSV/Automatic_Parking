module.exports = (function (app,myPort){

	app.route('/message')

		.post(function (request,response){

				 myPort.write(String(request.body.section), function (err){

				 	console.log(request.body.section);

				 	//if (err) {response.sendStatus(500)};

				 	response.sendStatus(200);

				 });

		})

})