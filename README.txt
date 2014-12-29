##### COMPILATION ET EXECUTION LINUX #####


# Pour compiler le programme avec la Makefile: 

	-> make set_env //CONSEILLE POUR LA PREMIERE COMPILATION
					//pour nettoyer l'environnement et tout reconstruire, compilation, etc. 

	-> make doc //construction de la documentation avec doxygene (PREREQUIS UBUNTU : "sudo apt-get install doxygen")

	-> make OU make all //compilation simple sans nettoyage
	
	-> make clean //nettoyage du binaire exécutable
	
	-> make mrproper //nettoyage des binaire, des objets, de la doc


# Vous pourrez ensuite l'exécuter grâce au fichier binaire : testRobot

# Le lien symbolique doc.html vous conduira vers l'index de la documentation du projet (si un "make doc" a été effectué).
