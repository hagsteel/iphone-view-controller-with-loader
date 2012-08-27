//
//  DPTableViewController.h
//  
//
//  Created by Jonas Hagstedt.
//

#import <UIKit/UIKit.h>

@interface DPTableViewController : UITableViewController {
	UIActivityIndicatorView *_loader;
	UIImageView *_loaderBackgroundView;

}
- (void)showLoader;
- (void)hideLoader;
@end
