// Real time use of Function and Structure

// They are Not Part of Data Structures by them self's But rather they are programming constructs through which you can build these Data structures. Most Important Use of a Structure is Gathering of Data Bits which are Similar at one place in the memory and treat them as one single entity. Taking the same Library Management System all the Details Regarding To a Book (Like Name, Author etc) can be placed at one place in memory using a structure.

// The struct type is suitable for representing lightweight objects such as Point, Rectangle, and Color. Although it is possible to represent a point as a class, a struct is more efficient in some scenarios. For example, if you declare an array of 1000 Point objects, you will allocate additional memory for referencing each object. In this case, the struct is less expensive.

// You want to store some information about a person: his/her name, citizenship number and salary. You can easily create different variables name, citNo, salary to store these information separately.

// However, in the future, you would want to store information about multiple persons. Now, you'd need to create different variables for each information per person: name1, citNo1, salary1, name2, citNo2, salary2

// You can easily visualize how big and messy the code would look. Also, since no relation between the variables (information) would exist, it's going to be a daunting task.

// A better approach will be to have a collection of all related information under a single name Person, and use it for every person. Now, the code looks much cleaner, readable and efficient as well.

// This collection of all related information under a single name Person is a structure.

// Mathematical Example

// A function is merely a “machine” that generates some output in correlation to a given input. So, if f(x)=2x+1, then, f(3)=7

// Understanding this behavior is essential to recognizing the variety of input\output correlations in the real world. Again, 
// all a function does is provide a mathematical way to model or represent a situation where a certain input will give a certain output.
// Here are a few examples:

// Circumference of a Circle - A circle’s circumference is a function of it’s diameter. I might represent this as C(d)=dπ

// Alternatively, C(r)=2π⋅r

// A Shadow - The length of person’s shadow along the floor is a function of their height.

// Driving a Car - When driving a car, your location is a function of time. You see, Quantum Physics notwithstanding, you can’t be in two places at once. Therefore, the vehicle’s position is a function of time.

// Temperature - Based on a variety of inputs, or factors, we get a certain temperature. So, temperature is a function of various variables. (By variables, I mean different variables in the environment.)

// Money - The amount of money you have is a function of the time spent earning it.

// Now, from a more mathematical stand point, here are two functions which provide actual, real world data used by professionals.

// Creation of Structure–Function Relationships in the Design of a Simulation Center



// Second Example:

// Functions are everywhere where technology is. Literally. But since the world is now crazy about machine learning, let me mention this one: machine learning is all about learning a function. For instance:

// mapping images to the names of the people on the images,
// mapping digital songs to authors/genres/song name,
// mapping MRI scan data to medical diagnoses,
// mapping Quora answers to subjects/categories,
// mapping internet clicks to advert suggestions.
// Mathematicians have long been working on function 
// estimation/approximation. Taylor or Fourier analysis is one example. What makes machine/statistical learning different from classical approaches is that:

// we are now using new models for the functions (e.g., neural networks, support vector machines, logistic regression),

// approximations is based on collected data rather than on intrinsic functional properties (e.g., input-output pairs rather than derivatives of all orders as in Taylor approximation),

// new efficient optimization algorithms are used (and developed) to fit the data to the model,

// new computing hardware enables training at scale and much higher speeds (e.g., GPUs, clusters),

// machine learning is now used also to find better representation of the input itself (this is called representation learning),

// new and easy to use software tools (e.g., TensorFlow, Keras, PyTorch) are now available which makes it possible to build more and more complicated machine learn models,

// when put together, the new approaches work so shockingly well that old approaches are blown out of water (e.g., computer vision).