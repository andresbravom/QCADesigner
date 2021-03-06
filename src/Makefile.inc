CORE_FILES = \
	fileio_helpers.c                        fileio_helpers.h \
	generic_utils.c                         generic_utils.h \
	exp_array.c                             exp_array.h \
	hsl2rgb.c                               hsl2rgb.h \
	custom_widgets.c                        custom_widgets.h \
                                          intl.h \
 $(NULL)

UNDO_REDO_FILES = \
	objects/QCADUndoEntry.c                 objects/QCADUndoEntry.h \
	objects/QCADUndoEntryGroup.c            objects/QCADUndoEntryGroup.h \
	objects/QCADUndoEntryObjectState.c      objects/QCADUndoEntryObjectState.h \
	selection_undo.c                        selection_undo.h \
  $(NULL)

STDIO_FILEIO_FILES = \
	fileio.c fileio.h \
  $(NULL)

OBJECT_FILES = \
	design.c                                design.h \
\
	objects/QCADRuler.c                     objects/QCADRuler.h \
\
	objects/QCADCell.c                      objects/QCADCell.h \
	objects/QCADCompoundDO.c                objects/QCADCompoundDO.h \
	objects/QCADObject.c                    objects/QCADObject.h \
	objects/QCADDesignObject.c              objects/QCADDesignObject.h \
	objects/QCADDOContainer.c               objects/QCADDOContainer.h \
	objects/QCADLabel.c                     objects/QCADLabel.h \
	objects/QCADLayer.c                     objects/QCADLayer.h \
	objects/QCADClockingLayer.c             objects/QCADClockingLayer.h \
	objects/QCADStretchyObject.c            objects/QCADStretchyObject.h \
	objects/QCADElectrode.c                 objects/QCADElectrode.h \
	objects/QCADRectangleElectrode.c        objects/QCADRectangleElectrode.h \
	objects/QCADSubstrate.c                 objects/QCADSubstrate.h \
	objects/QCADParamSpecObjectList.c       objects/QCADParamSpecObjectList.h \
	objects/object_helpers.c                objects/object_helpers.h \
  $(NULL)

PROPERTY_UI_FILES = \
	objects/QCADParamSpecTypeList.c         objects/QCADParamSpecTypeList.h \
	objects/QCADPropertyUI.c                objects/QCADPropertyUI.h \
	objects/QCADPropertyUISingle.c          objects/QCADPropertyUISingle.h \
	objects/QCADPropertyUIDouble.c          objects/QCADPropertyUIDouble.h \
	objects/QCADPropertyUINumeric.c         objects/QCADPropertyUINumeric.h \
	objects/QCADPropertyUIInt.c             objects/QCADPropertyInt.h \
	objects/QCADPropertyUIGroup.c           objects/QCADPropertyUIGroup.h \
	objects/QCADPropertyUIEnum.c            objects/QCADPropertyUIEnum.h \
	objects/QCADPropertyUIText.c            objects/QCADPropertyUIText.h \
	objects/QCADPropertyUIObjectList.c      objects/QCADPropertyUIObjectList.h \
	objects/QCADPropertyUIBoolean.c         objects/QCADPropertyUIBoolean.h \
  $(NULL)

SIMULATION_FILES = \
	simulation.c                            simulation.h \
	semi_coherent.c                         semi_coherent.h \
	bistable_simulation.c                   bistable_simulation.h \
	coherence_vector.c                      coherence_vector.h \
	three_state_coherence.c			three_state_coherence.h \
	matrixlib_3x3.c				matrixlib_3x3.h \
	ts_field_clock.c			ts_field_clock.h \
  $(NULL)

SIMULATION_UI_FILES = \
	semi_coherent_properties_dialog.c       semi_coherent_properties_dialog.h \
	bistable_properties_dialog.c            bistable_properties_dialog.h \
	coherence_vector_properties_dialog.c    coherence_vector_properties_dialog.h \
	ts_coherence_vector_properties_dialog.c	ts_coherence_vector_properties_dialog.h \
	ts_fc_properties_dialog.c		ts_fc_properties_dialog.h \
  $(NULL)

GTK_WORKAROUND_FILES = \
	objects/QCADComboBox.c                  objects/QCADComboBox.h \
	objects/QCADToggleToolButton.c          objects/QCADToggleToolButton.h \
	objects/QCADRadioToolButton.c           objects/QCADRadioToolButton.h \
	objects/QCADRadioButton.c               objects/QCADRadioButton.h \
  $(NULL)

GRAPH_DIALOG_FILES = \
	graph_dialog.c                          graph_dialog.h \
	graph_dialog_interface.c                graph_dialog_interface.h \
	graph_dialog_callbacks.c                graph_dialog_callbacks.h \
	graph_dialog_data.c                     graph_dialog_data.h \
	waveform_interpretation_dialog.c        waveform_interpretation_dialog.h \
  $(NULL)

VECTOR_TABLE_DIALOG_FILES = \
	vector_table_options_dialog.c           vector_table_options_dialog.h \
	vector_table_options_dialog_interface.c vector_table_options_dialog_interface.h \
	vector_table_options_dialog_callbacks.c vector_table_options_dialog_callbacks.h \
	                                        vector_table_options_dialog_callback_helpers.h \
  $(NULL)
