class HybridSteps(object):
	def assign(self, dict):
		pass

	def value(self, name, value=None):
		pass

	def unassign(self, name):
		pass

	def execute(self, int_verbosity):
		pass

	def export(self):
		pass

	def get_data_ptr(self):
		pass

	def set_data_ptr(self, data_ptr):
		pass

	def __getattribute__(self, *args, **kwargs):
		pass

	def __init__(self, *args, **kwargs):
		pass

	class Common(object):
		def assign(self): 
			pass
	
		def export(self) -> dict:
			pass
	
		def __init__(self, *args, **kwargs): 
			pass


		input = dict


	class Outputs(object):
		def assign(self): 
			pass
	
		def export(self) -> dict:
			pass
	
		def __init__(self, *args, **kwargs): 
			pass


		output = dict




def default(config) -> HybridSteps:
	pass

def new() -> HybridSteps:
	pass

def wrap(ssc_data_t) -> HybridSteps:
	pass

def from_existing(model, config="") -> HybridSteps:
	pass

__loader__ = None 

__spec__ = None
