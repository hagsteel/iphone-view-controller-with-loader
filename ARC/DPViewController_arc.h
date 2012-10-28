//
//  DPViewController_arc.h
//
//  Created by Jonas Hagstedt.
//

#import <UIKit/UIKit.h>

@interface DPViewController_arc : UIViewController {
	UIActivityIndicatorView *_loader;
	UIImageView *_loaderBackgroundView;
}

- (void)showLoader;
- (void)hideLoader;
@end
