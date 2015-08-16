#import <UIKit/UIKit.h>
#import "User.h"

extern NSString *const friendCellIdentifier;

@interface FriendListDataSourceDelegate : NSObject <UITableViewDataSource, UITableViewDelegate>

- (void)configureWithFriends: (NSArray *)friends;
- (void)configureWithUser: (User *)user;

@end
