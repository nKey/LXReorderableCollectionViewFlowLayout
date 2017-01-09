#import <UIKit/UIKit.h>

@protocol LXReordableCollectionViewFlowLayoutDelegate <NSObject>

- (void)didBegingMovingCoverViewRelatedToCollectionViewIndexPath:(NSIndexPath *)indexPath;
- (void)didMoveCoverViewWithGestureRecognizer:(UIPanGestureRecognizer *)recognizer;
- (BOOL)didEndMovingCoverViewWithGestureRecognizer:(UILongPressGestureRecognizer *)recognizer;

@end
