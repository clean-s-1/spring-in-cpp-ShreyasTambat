class IAlerter;

class EmailAlert : public IAlerter
{
  public:
  
  EmailAlert();
  
  ~EmailAlert();
  
  void raiseAlert();
  
  bool emailSent;
};
