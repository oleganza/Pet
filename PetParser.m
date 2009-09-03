#import "PetParser.h"

@implementation PetParser



-(id) messageForString:(NSString*)text
{
  return [self messageForData:[text dataUsingEncoding:NSUTF8StringEncoding]];
}

-(id) messageForData:(NSData*)data
{
  if ([data length] > 0)
  {
    char* bytes = (char*)[data bytes];
  }
  else
  {
    return nil;
  }
}

@end
