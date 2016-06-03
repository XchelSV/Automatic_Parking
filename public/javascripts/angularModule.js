var app = angular.module('Estacionamiento',[]);


	app.controller('indexController', function ($scope,$http){

		$scope.buttonFlag1 = true;
		$scope.buttonFlag2 = true;
		$scope.buttonFlag3 = true;
		$scope.buttonFlag4 = true;
		$scope.buttonFlag5 = true;
		$scope.buttonFlag6 = true;

		$scope.ingresar = function (number){

			$http.post('/message',{section:number}).

			    	success(function(data, status, headers, config) {

			    		switch(number){

			    			case 1: $scope.buttonFlag1 = !$scope.buttonFlag1;
			    			break;
			    			case 2: $scope.buttonFlag2 = !$scope.buttonFlag2;
			    			break;
			    			case 3: $scope.buttonFlag3 = !$scope.buttonFlag3;
			    			break;
			    			case 4: $scope.buttonFlag4 = !$scope.buttonFlag4;
			    			break;
			    			case 5: $scope.buttonFlag5 = !$scope.buttonFlag5;
			    			break;
			    			case 6: $scope.buttonFlag6 = !$scope.buttonFlag6;
			    			break;
			    			case 'A': $scope.buttonFlag1 = !$scope.buttonFlag1;
			    			break;
			    			case 'B': $scope.buttonFlag2 = !$scope.buttonFlag2;
			    			break;
			    			case 'C': $scope.buttonFlag3 = !$scope.buttonFlag3;
			    			break;
			    			case 'D': $scope.buttonFlag4 = !$scope.buttonFlag4;
			    			break;
			    			case 'E': $scope.buttonFlag5 = !$scope.buttonFlag5;
			    			break;
			    			case 'F': $scope.buttonFlag6 = !$scope.buttonFlag6;
			    			break;


			    		}
				      
				    }).
				    error(function(data, status, headers, config) {
				      // log error
				    });
		}

	});